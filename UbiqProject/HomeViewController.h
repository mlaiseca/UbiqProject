//
//  ViewController.h
//  UbiqProject
//
//  Created by Joey on 10/2/15.
//  Copyright © 2015 Joey. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Query.h"

@interface HomeViewController : UIViewController

@property (weak, nonatomic) IBOutlet UISegmentedControl *CategorySegmentedControl;
@property (weak, nonatomic) IBOutlet UITextField *FirstLocation;
@property (weak, nonatomic) IBOutlet UITextField *SecondLocation;

@property Query *queryToPass;

- (IBAction)ConvergeLocations:(id)sender;


@end

