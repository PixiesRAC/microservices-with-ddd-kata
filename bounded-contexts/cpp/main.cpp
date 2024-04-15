#include "Services/Catalog/Book.h"
#include "Services/Catalog/Dvd.h"
#include "Services/Catalog/IItem.h"
#include "Services/Catalog/ItemId.h"
#include "Services/Catalog/Service.h"
#include "Services/Shipping/Delivery.h"
#include "Services/ShoppingCart/Cart.h"
#include "Services/ShoppingCart/CartItem.h"
#include "Services/ShoppingCart/CartService.h"

#include <iostream>

int	main()
{

	/*
		Products available with his information
	*/

	Services::Catalog::Dvd	LordOfTheRing(Services::Catalog::ItemId{"ID_LordOfTheRing"}, 8);
	Services::Catalog::Dvd	TheHobbit(Services::Catalog::ItemId{"ID_TheHobbit"}, 4);
	Services::Catalog::Dvd	Matrix(Services::Catalog::ItemId{"ID_Matrix"}, 4);
	Services::Catalog::Book	GameOfThrone(Services::Catalog::ItemId{"ID_GameOfThrone"}, 4);
	Services::Catalog::Book	HarryPotter(Services::Catalog::ItemId{"ID_HarryPotter"}, 4);

	/*
		Create Catalog
	*/
	Services::Catalog::Service	catalog;

	catalog.addItem(LordOfTheRing);
	catalog.addItem(TheHobbit);
	catalog.addItem(Matrix);
	catalog.addItem(GameOfThrone);
	catalog.addItem(HarryPotter);

	/*
		Lets do some shopping
	*/

	Services::ShoppingCart::Cart	cart;

	cart.addItem(Services::ShoppingCart::CartItem(LordOfTheRing.itemId, 1));
	cart.addItem(Services::ShoppingCart::CartItem(Matrix.itemId, 1));
	cart.addItem(Services::ShoppingCart::CartItem(TheHobbit.itemId, 2));
	cart.addItem(Services::ShoppingCart::CartItem(GameOfThrone.itemId, 4));
	cart.addItem(Services::ShoppingCart::CartItem(HarryPotter.itemId, 2));

	/*
		lets deliver
	*/

	Services::Shipping::Delivery	delivery(catalog);

	std::cout << "Total order weight " << delivery.calculateOrderWeight(cart) << std::endl;
	return 0;
}
