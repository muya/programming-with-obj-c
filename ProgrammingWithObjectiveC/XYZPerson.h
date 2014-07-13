//
//  XYZPerson.h
//  ProgrammingWithObjectiveC
//
//  Created by Muya on 7/13/14.
//  Copyright (c) 2014 muya. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface XYZPerson : NSObject

@property NSString *firstName;
@property NSString *lastName;
@property NSDate *dateOfBirth;

+ (id) person;
- (void) sayHello;

@end
