/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   defenitions.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mnathali <mnathali@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 13:21:55 by mnathali          #+#    #+#             */
/*   Updated: 2022/08/24 13:23:49 by mnathali         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DEFENITIONS_HPP
#define DEFENITIONS_HPP

#include "Data.hpp"

Data		*deserialize(uintptr_t raw);
uintptr_t	serialize(Data* ptr);

#endif