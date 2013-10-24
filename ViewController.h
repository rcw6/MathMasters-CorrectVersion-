//
//  ViewController.h
//  MathMasters
//
//  Created by Ryan Wong on 2013-10-06.
//  Copyright (c) 2013 CMPT275_team12. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "GlobalVariables.h"
#import "CountingStarsViewController.h"
#import "FishToFishViewController.h"
#import "MakingCentsViewController.h"
#import "OptionsViewController.h"


@interface ViewController : UIViewController
{
    GlobalVariables *optionsSingle;

}
-(IBAction)cstars_Clicked:(id)sender;
-(IBAction)fishtoFish_Clicked:(id)sender;
-(IBAction)makingCents_Clicked:(id)sender;
-(IBAction)options_Clicked:(id)sender;

@property (nonatomic,strong) CountingStarsViewController *countingStarsViewController;
@property (nonatomic,strong) FishToFishViewController *fishtoFishViewController;
@property(nonatomic,strong) MakingCentsViewController * makingCentsViewController;
@property(nonatomic,strong) OptionsViewController *optionsViewController;
//@property(nonatomic,strong) NSNumber *difficulty_Level;

@end
