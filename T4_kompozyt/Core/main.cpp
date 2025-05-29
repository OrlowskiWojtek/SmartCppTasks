#include "include/DepartmentComposite.hpp"
#include "include/PersonLeaf.hpp"

int main(){
    DepartmentComposite company("SuperCompanyWithAssasins_MainDepartment");
    company.add_element(std::make_unique<PersonLeaf>("Marek", "Markowy", Job::BOSS));
    company.add_element(std::make_unique<PersonLeaf>("Andrzej", "Andrzejowy", Job::MANAGER));
    company.add_element(std::make_unique<PersonLeaf>("Maciek", "Maćkowy", Job::ASSASIN));

    DepartmentComposite financial("FinancialDepartment");
    financial.add_element(std::make_unique<PersonLeaf>("Beatka", "Beatkowa", Job::MANAGER));
    financial.add_element(std::make_unique<PersonLeaf>("Marek", "Maćkowy", Job::WORKER));
    financial.add_element(std::make_unique<PersonLeaf>("Wojtek", "Wojtkowy", Job::WORKER));

    company.add_element(std::make_unique<DepartmentComposite>(financial));

    DepartmentComposite developers("DeveloperDepartment");
    developers.add_element(std::make_unique<PersonLeaf>("Władek", "Władkowy", Job::MANAGER));
    developers.add_element(std::make_unique<PersonLeaf>("Kuba", "Kubowy", Job::DEVELOPER));
    developers.add_element(std::make_unique<PersonLeaf>("Monika", "Monikowa", Job::DEVELOPER));

    company.add_element(std::make_unique<DepartmentComposite>(developers));

    DepartmentComposite assasins("AssasinDepartment");
    assasins.add_element(std::make_unique<PersonLeaf>("DANE", "TAJNE", Job::MANAGER));
    assasins.add_element(std::make_unique<PersonLeaf>("DANE", "TAJNE", Job::ASSASIN));
    assasins.add_element(std::make_unique<PersonLeaf>("DANE", "TAJNE", Job::ASSASIN));

    company.add_element(std::make_unique<DepartmentComposite>(assasins));

    company.print_details();
    std::cout << "Company value: " << company.count_work() << std::endl;
}
