//
//  PIOSideBarViewController.h
//  LaundryWalaz
//
//  Created by pito on 6/24/16.
//  Copyright © 2016 pito. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PIOSideBarViewController : UIViewController

typedef NS_ENUM(NSUInteger, PIODashboardRowType) {
    PIODashboardRowTypeOrder,
    PIODashboardRowTypePricing,
    PIODashboardRowTypeHelp,
    PIODashboardRowTypeHowItWorks,
    PIODashboardRowTypePrivacy,
    PIODashboardRowTypeTsAndCs,
    PIODashboardRowTypeLogout,
};

@end
