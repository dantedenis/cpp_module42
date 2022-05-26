#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(): Form("ShrubberyCreationForm", 145, 137), target("SomeTarget") {
	std::cout << BLUE << "{ShrubberyCreationForm} Constructor default call" << std::endl << D_COL;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string _target): Form("ShrubberyCreationForm", 145, 137), target(_target) {
	std::cout << BLUE << "{ShrubberyCreationForm} Constructor default call for target: " 
				<< target << std::endl << D_COL;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& form): 
				Form(form.name, 145, 137), target(form.target) {
	std::cout << BLUE << "{ShrubberyCreationForm} Copy constructor call for target" << std::endl << D_COL;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
	std::cout << BLUE << "{ShrubberyCreationForm} Destructor call" << std::endl << D_COL;
}

void	ShrubberyCreationForm::execute(const Bureaucrat& obj) const {
	if (obj.getGrade() > gradeForExec)
		throw GradeTooLowException();
	std::ofstream	out(target + "_target");
	if (out.is_open()) {
		for (int i = 0; i < 35; i++)
			out << BTree[i] << std::endl;
		out.close();
	} else {
		throw std::runtime_error("Error open file");
	}
}

const std::string ShrubberyCreationForm::BTree[] = {
	"              _{\\ _{\\{\\/}/}/}__",
	"             {/{/\\}{/{/\\}(\\}{/\\} _",
	"            {/{/\\}{/{/\\}(_)\\}{/{/\\}  _",
	"         {\\{/(\\}\\}{/{/\\}\\}{/){/\\}\\} /\\}",
	"        {/{/(_)/}{\\{/)\\}{\\(_){/}/}/}/}",
	"       _{\\{/{/{\\{/{/(_)/}/}/}{\\(/}/}/}",
	"      {/{/{\\{\\{\\(/}{\\{\\/}/}{\\}(_){\\/}\\}",
	"      _{\\{/{\\{/(_)\\}/}{/{/{/\\}\\})\\}{/\\}",
	"     {/{/{\\{\\(/}{/{\\{\\{\\/})/}{\\(_)/}/}\\}",
	"      {\\{\\/}(_){\\{\\{\\/}/}(_){\\/}{\\/}/})/}",
	"       {/{\\{\\/}{/{\\{\\{\\/}/}{\\{\\/}/}\\}(_)",
	"      {/{\\{\\/}{/){\\{\\{\\/}/}{\\{\\(/}/}\\}/}",
	"       {/{\\{\\/}(_){\\{\\{\\(/}/}{\\(_)/}/}\\}",
	"         {/({/{\\{/{\\{\\/}(_){\\/}/}\\}/}(\\}",
	"          (_){/{\\/}{\\{\\/}/}{\\{\\)/}/}(_)",
	"            {/{/{\\{\\/}{/{\\{\\{\\(_)/}",
	"             {/{\\{\\{\\/}/}{\\{\\}/}",
	"              {){/ {\\/}{\\/} \\}\\}",
	"              (_)  \\.-'.-/",
	"          __...--- |'-.-'| --...__",
	"   _...--\"   .-'   |'-.-'|  ' -.  \"\"--..__",
	" -\"    \' .  . \'    |.\'-._| \'  . .  \'   jro",
	" .  \'-  \'    .--\'  | \'-.\'|    .  \'  . \'",
	"          \' ..     |\'-_.-|",
	"  .  \'  .       _.-|-._ -|-._  .  \'  .",
	"              .\'   |\'- .-|   \'.",
	"  ..-\'   \' .  \'.   `-._.-   .\'  \'  - .",
	"   .-\' \'        \'-._______.-\'     \'  .",
	"        .      ~,",
	"    .       .   |\\   .    \' \'-.",
	"    ___________/  \\____________",
	"   /  Why is it, when you want \\",
	"  |  something, it is so damn   |",
	"  |    much work to get it?     |",
	"   \\___________________________/",
};