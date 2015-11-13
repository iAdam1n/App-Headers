/*
* This header is generated by classdump-dyld 0.7
* on Friday, November 13, 2015 at 2:24:40 AM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/8DFB78BE-38F8-46CD-A2D2-C1EE6F510A67/Slack.app/Slack
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Slack/Slack-Structs.h>
#import <UIKit/UIView.h>

@class SLKFile, SLKFileToolbarButtonsContainerView, UIView, CAGradientLayer, UILabel;

@interface SLKFileToolbar : UIView {

	BOOL _expanded;
	BOOL _animatingExpansion;
	SLKFile* _file;
	/*^block*/id _buttonTappedBlock;
	SLKFileToolbarButtonsContainerView* _buttonsContainerView;
	UIView* _hairline;
	CAGradientLayer* _gradientView;
	UILabel* _channelsLabel;
	unsigned long long _style;

}

@property (nonatomic,retain) SLKFile * file;                                                         //@synthesize file=_file - In the implementation block
@property (nonatomic,copy) id buttonTappedBlock;                                                     //@synthesize buttonTappedBlock=_buttonTappedBlock - In the implementation block
@property (nonatomic,retain) SLKFileToolbarButtonsContainerView * buttonsContainerView;              //@synthesize buttonsContainerView=_buttonsContainerView - In the implementation block
@property (nonatomic,readonly) CGRect titleViewFrame; 
@property (nonatomic,retain) UIView * hairline;                                                      //@synthesize hairline=_hairline - In the implementation block
@property (nonatomic,retain) CAGradientLayer * gradientView;                                         //@synthesize gradientView=_gradientView - In the implementation block
@property (nonatomic,retain) UILabel * channelsLabel;                                                //@synthesize channelsLabel=_channelsLabel - In the implementation block
@property (assign,nonatomic) unsigned long long style;                                               //@synthesize style=_style - In the implementation block
@property (assign,getter=isExpanded,nonatomic) BOOL expanded;                                        //@synthesize expanded=_expanded - In the implementation block
@property (assign,getter=isAnimatingExpansion,nonatomic) BOOL animatingExpansion;                    //@synthesize animatingExpansion=_animatingExpansion - In the implementation block
-(void)addBackgroundGradient;
-(UIView *)hairline;
-(id)buttonTappedBlock;
-(void)setButtonTappedBlock:(id)arg1 ;
-(void)setHairline:(UIView *)arg1 ;
-(void)forceCompress;
-(CGRect)titleViewFrame;
-(UILabel *)channelsLabel;
-(BOOL)isAnimatingExpansion;
-(BOOL)shouldExpand;
-(void)setAnimatingExpansion:(BOOL)arg1 ;
-(void)updateViewForExpansion;
-(double)expandedChannelsLabelHeight;
-(void)expandGradient;
-(void)updateViewForCompression;
-(void)compressGradient;
-(void)setChannelsLabelText;
-(void)channelsLabelTapped:(id)arg1 ;
-(void)setButtonsContainerView:(SLKFileToolbarButtonsContainerView *)arg1 ;
-(void)setChannelsLabel:(UILabel *)arg1 ;
-(id)init;
-(void)layoutSubviews;
-(unsigned long long)style;
-(void)setStyle:(unsigned long long)arg1 ;
-(BOOL)isExpanded;
-(void)setExpanded:(BOOL)arg1 ;
-(void)expand;
-(void)compress;
-(void)setGradientView:(CAGradientLayer *)arg1 ;
-(CAGradientLayer *)gradientView;
-(void)setFile:(SLKFile *)arg1 ;
-(SLKFile *)file;
-(SLKFileToolbarButtonsContainerView *)buttonsContainerView;
@end

