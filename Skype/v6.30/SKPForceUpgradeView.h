/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/Skype-Structs.h>
#import <UIKit/UIView.h>

@class MKParagraphView, UILabel, MKDefaultButton;

@interface SKPForceUpgradeView : UIView {

	/*^block*/id _getItNowBlock;
	MKParagraphView* _paragraphView;
	UILabel* _iconLabel;
	MKDefaultButton* _takeActionButton;

}

@property (nonatomic,retain) MKParagraphView * paragraphView;                 //@synthesize paragraphView=_paragraphView - In the implementation block
@property (nonatomic,retain) UILabel * iconLabel;                             //@synthesize iconLabel=_iconLabel - In the implementation block
@property (nonatomic,retain) MKDefaultButton * takeActionButton;              //@synthesize takeActionButton=_takeActionButton - In the implementation block
@property (nonatomic,copy) id getItNowBlock;                                  //@synthesize getItNowBlock=_getItNowBlock - In the implementation block
+(BOOL)requiresConstraintBasedLayout;
-(void)takeActionButtonPressed;
-(id)getItNowBlock;
-(UILabel *)iconLabel;
-(void)setIconLabel:(UILabel *)arg1 ;
-(void)createSubviews;
-(void)setParagraphView:(MKParagraphView *)arg1 ;
-(MKParagraphView *)paragraphView;
-(void)setGetItNowBlock:(id)arg1 ;
-(void)setTakeActionButton:(MKDefaultButton *)arg1 ;
-(MKDefaultButton *)takeActionButton;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)updateConstraints;
-(id)viewConstraints;
@end
