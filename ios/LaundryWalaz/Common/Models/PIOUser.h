//
//  PIOUser.h
//  LaundryWalaz
//
//  Created by pito on 7/25/16.
//  Copyright © 2016 pito. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PIOUser : NSObject

@property (nonatomic, strong) NSString *firstName;
@property (nonatomic, strong) NSString *lastName;
@property (nonatomic, strong) NSString *email;
@property (nonatomic, strong) NSString *password;
@property (nonatomic, strong) NSString *phone;
@property (nonatomic, strong) NSString *address;
@property (nonatomic, strong) NSString *locationID;

- (instancetype)initWithParametersFirstName:(NSString *)firstName lastName:(NSString *)lastName email:(NSString *)email password:(NSString *)password phone:(NSString *)phone address:(NSString *)address locationID:(NSString *)locationID;
+ (void)userRegistration:(PIOUser *)user callback:(void (^)(NSError *error,BOOL status, id responseObject))callback;



@end
