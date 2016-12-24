//
//  Car.h
//  Toyotas are Cars too
//
//  Created by Alex Bearinger on 2016-12-22.
//  Copyright © 2016 Alex Bearinger. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Car : NSObject {}

@property (copy) NSString *model;

-(void) drive;

-(id)initWithModel:(NSString *)model;
@end

