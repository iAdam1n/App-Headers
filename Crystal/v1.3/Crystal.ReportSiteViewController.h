/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:51:08 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/AA3738EF-C276-423D-BBB1-85BEAAD70331/Crystal.app/Crystal
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Crystal/Crystal-Structs.h>
#import <UIKit/UIViewController.h>
#import <UIKit/UITextFieldDelegate.h>

@class UITextField, UISegmentedControl;

@interface Crystal.ReportSiteViewController : UIViewController <UITextFieldDelegate> {

	 urlField;
	 commentsField;
	 segmentedButtonOutlet;

}

@property (assign,__weak,nonatomic) UITextField * urlField; 
@property (assign,__weak,nonatomic) UITextField * commentsField; 
@property (assign,__weak,nonatomic) UISegmentedControl * segmentedButtonOutlet; 
-(UITextField *)urlField;
-(void)setUrlField:(UITextField *)arg1 ;
-(UITextField *)commentsField;
-(void)setCommentsField:(UITextField *)arg1 ;
-(UISegmentedControl *)segmentedButtonOutlet;
-(void)setSegmentedButtonOutlet:(UISegmentedControl *)arg1 ;
-(void)segmentedButton:(id)arg1 ;
-(void)submitButton:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewDidLoad;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
@end
