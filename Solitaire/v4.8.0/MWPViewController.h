/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/SolitaireFree-Structs.h>
#import <UIKit/UIViewController.h>

@class MyViewController;

@interface MWPViewController : UIViewController {

	id main;
	MyViewController* controller;

}

@property (__weak) MyViewController * controller; 
-(id)initWithMain:(id)arg1 ;
-(CGSize)suggestedSize:(long long)arg1 ;
-(void)moveControls:(long long)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)viewWillLayoutSubviews;
-(void)viewDidUnload;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(MyViewController *)controller;
-(void)setController:(MyViewController *)arg1 ;
@end

