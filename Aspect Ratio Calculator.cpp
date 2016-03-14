#include <iostream>

using namespace std;

float width, height, choice, aspect, width2, height2, numerator, divisor;
bool done;
int iwidth, iheight, a, b, c;
char loopchoice;


int main ()

{

    do

    {

        cout << "Please enter the current width: ";
        cin >> width;

        cout << "Please enter the current height: ";
        cin >> height;

        cout << "\n\nChoose 1) Width or 2) Height.";
        cin >> choice;

        aspect = width / height;

        if (choice == 1)
        {

            cout << "\nEnter the width: ";
            cin >> width2;



// ********************Calculating the greatest common divider*********************************
            iwidth = width;
            iheight = height;

            a = iwidth;
            b = iheight;

            if (a == 0 && b == 0)

                cout << "Aspect ratio is 0 : 0" << endl;

            else if (a == b)

                cout << "Aspect ratio is 1 : 1" << endl;

            else
            {

                while (b != 0)
                {
                    c = b;
                    b = a % b;
                    a = c;
                }
            }

// *****************End of calculation for greatest common divider*****************************

// ***************** Algorythym for getting the aspect ratio **********************************

            numerator = iwidth / a;
            divisor = iheight /a;

// ***************** END OF ALGORYTHYM ********************************************************


            cout << "\nYour aspect ratio is: " << aspect << " or ";
            cout << numerator << " : " << divisor << endl;

            height2 = height / width * width2;

            cout << "Height should be:     " << height2;
            cout << "\n";

        }
        if (choice == 2)
        {
            cout << "\nEnter the height: ";
            cin >> height2;


            // ********************Calculating the greatest common divider*********************************
            iwidth = width;
            iheight = height;

            a = iwidth;
            b = iheight;

            if (a == 0 && b == 0)

                cout << "Aspect ratio is 0 : 0" << endl;

            else if (a == b)

                cout << "Aspect ratio is 1 : 1" << endl;

            else
            {

                while (b != 0)
                {
                    c = b;
                    b = a % b;
                    a = c;
                }
            }

// *****************End of calculation for greatest common divider*****************************

// ***************** Algorythym for getting the aspect ratio **********************************

            numerator = iwidth / a;
            divisor = iheight /a;

// ***************** END OF ALGORYTHYM ********************************************************


            cout << "\nYour aspect ratio is: " << aspect << " or ";
            cout << numerator << " : " << divisor << endl;

            width2 = width / height * height2;

            cout << "Width should be:     " << width2;
            cout << "\n";

        }
        cout << "\nDo you wish to try different dimentions? [Y/N] ";
        cin >> loopchoice;

        if (toupper(loopchoice) == 'Y')
        {
            cout << "\n";
            done = false;
        }
        else if (toupper(loopchoice) == 'N')

            done = true;
    }
    while(!done);
    return 0;
}
