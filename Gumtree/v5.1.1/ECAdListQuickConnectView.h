/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:37 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <UIKit/UIView.h>

@class UIColor, UIButton, NSString, ECSegmentedView;

@interface ECAdListQuickConnectView : UIView {

	BOOL _showCallButton;
	BOOL _showMapButton;
	/*^block*/id _callButtonHandler;
	/*^block*/id _mapButtonHandler;
	UIColor* _separatorColor;
	UIButton* _callButton;
	NSString* _distanceString;
	UIButton* _mapButton;
	ECSegmentedView* _segmentedView;

}

@property (nonatomic,retain) UIButton * callButton;                        //@synthesize callButton=_callButton - In the implementation block
@property (nonatomic,retain) NSString * distanceString;                    //@synthesize distanceString=_distanceString - In the implementation block
@property (nonatomic,retain) UIButton * mapButton;                         //@synthesize mapButton=_mapButton - In the implementation block
@property (nonatomic,retain) ECSegmentedView * segmentedView;              //@synthesize segmentedView=_segmentedView - In the implementation block
@property (assign,nonatomic) BOOL showCallButton;                          //@synthesize showCallButton=_showCallButton - In the implementation block
@property (assign,nonatomic) BOOL showMapButton;                           //@synthesize showMapButton=_showMapButton - In the implementation block
@property (nonatomic,copy) id callButtonHandler;                           //@synthesize callButtonHandler=_callButtonHandler - In the implementation block
@property (nonatomic,copy) id mapButtonHandler;                            //@synthesize mapButtonHandler=_mapButtonHandler - In the implementation block
@property (nonatomic,retain) UIColor * separatorColor;                     //@synthesize separatorColor=_separatorColor - In the implementation block
-(void)handleButtonTap:(id)arg1 ;
-(void)setSegmentedView:(ECSegmentedView *)arg1 ;
-(ECSegmentedView *)segmentedView;
-(UIButton *)callButton;
-(id)callButtonHandler;
-(UIButton *)mapButton;
-(id)mapButtonHandler;
-(void)setShowCallButton:(BOOL)arg1 ;
-(void)setShowMapButton:(BOOL)arg1 ;
-(void)setDistanceString:(NSString *)arg1 ;
-(BOOL)showCallButton;
-(void)setCallButton:(UIButton *)arg1 ;
-(BOOL)showMapButton;
-(NSString *)distanceString;
-(void)setMapButton:(UIButton *)arg1 ;
-(void)setShowCallButton:(BOOL)arg1 showMapButton:(BOOL)arg2 distanceString:(id)arg3 ;
-(void)setCallButtonHandler:(id)arg1 ;
-(void)setMapButtonHandler:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIColor *)separatorColor;
-(void)setSeparatorColor:(UIColor *)arg1 ;
-(void)updateButtons;
-(void)commonInit;
@end

