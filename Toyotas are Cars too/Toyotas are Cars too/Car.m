//
//  Car.m
//  Toyotas are Cars too
//
//  Created by Alex Bearinger on 2016-12-22.
//  Copyright © 2016 Alex Bearinger. All rights reserved.
//

#import "Car.h"

@implementation Car
-(void)drive{
    NSLog(@"%@",self.model);
}

-(id) initWithModel:(NSString *)model{
    self = [super init];
    _model = model;
    return self;
}
@end

