/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:22 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/FicheMatchVC.h>

@class UILabel;

@interface FicheMatchFootballVC : FicheMatchVC {

	UILabel* subscoreLabel;

}

@property (nonatomic,retain) UILabel * subscoreLabel; 
-(id)flurryTag;
-(void)setupFirstDisplay;
-(void)updateStateLabel;
-(void)updateScoreLabels;
-(UILabel *)subscoreLabel;
-(void)setSubscoreLabel:(UILabel *)arg1 ;
-(id)getSubviewControllerOfType:(int)arg1 ;
-(void)didReceiveMemoryWarning;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)refreshView;
@end

