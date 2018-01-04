//
//  DetailViewController.h
//  XcodeMobileApp
//
//  Created by Pascal on 04/01/2018.
//  Copyright © 2018 Pascal. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "XcodeMobileApp+CoreDataModel.h"

@interface DetailViewController : UIViewController

@property (strong, nonatomic) Event *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

