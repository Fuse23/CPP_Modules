/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: falarm <falarm@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 22:31:24 by falarm            #+#    #+#             */
/*   Updated: 2022/11/22 22:18:02 by falarm           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

bool    bsp( Point const a, Point const b, Point const c, Point const point ) {

    Fixed tmp_a;
    Fixed tmp_b;
    Fixed tmp_c;

    tmp_a =  (a.getX() - point.getX()) * (b.getY() - a.getY()) - (b.getX() - a.getX()) * (a.getY() - point.getY());
    tmp_b =  (b.getX() - point.getX()) * (c.getY() - b.getY()) - (c.getX() - b.getX()) * (b.getY() - point.getY());
    tmp_c =  (c.getX() - point.getX()) * (a.getY() - c.getY()) - (a.getX() - c.getX()) * (c.getY() - point.getY());

    if ((tmp_a > 0 && tmp_b > 0 && tmp_c > 0) || (tmp_a < 0 && tmp_b < 0 && tmp_c < 0))
        return true;

    return false;
}
