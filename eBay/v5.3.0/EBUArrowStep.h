/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:54:33 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/EDDCC4DC-B551-47FD-8F2D-ADD28D2EEB77/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, UIColor, EBUArrowView;

@interface EBUArrowStep : NSObject {

	NSString* _title;
	UIColor* _titleColorActive;
	UIColor* _titleColorPending;
	UIColor* _titleColorComplete;
	UIColor* _arrowColorActive;
	UIColor* _arrowColorPending;
	UIColor* _arrowColorComplete;
	double _widthPending;
	double _widthComplete;
	EBUArrowView* _arrowView;
	unsigned long long _state;
	NSString* _titlePrefix;

}

@property (nonatomic,retain) EBUArrowView * arrowView;                  //@synthesize arrowView=_arrowView - In the implementation block
@property (assign,nonatomic) unsigned long long state;                  //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSString * titlePrefix;                    //@synthesize titlePrefix=_titlePrefix - In the implementation block
@property (nonatomic,retain) NSString * title;                          //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) UIColor * titleColorActive;                //@synthesize titleColorActive=_titleColorActive - In the implementation block
@property (nonatomic,retain) UIColor * titleColorPending;               //@synthesize titleColorPending=_titleColorPending - In the implementation block
@property (nonatomic,retain) UIColor * titleColorComplete;              //@synthesize titleColorComplete=_titleColorComplete - In the implementation block
@property (nonatomic,retain) UIColor * arrowColorActive;                //@synthesize arrowColorActive=_arrowColorActive - In the implementation block
@property (nonatomic,retain) UIColor * arrowColorPending;               //@synthesize arrowColorPending=_arrowColorPending - In the implementation block
@property (nonatomic,retain) UIColor * arrowColorComplete;              //@synthesize arrowColorComplete=_arrowColorComplete - In the implementation block
@property (assign,nonatomic) double widthPending;                       //@synthesize widthPending=_widthPending - In the implementation block
@property (assign,nonatomic) double widthComplete;                      //@synthesize widthComplete=_widthComplete - In the implementation block
-(id)colorForState:(unsigned long long)arg1 ;
-(UIColor *)arrowColorPending;
-(UIColor *)arrowColorActive;
-(UIColor *)arrowColorComplete;
-(NSString *)titlePrefix;
-(UIColor *)titleColorPending;
-(UIColor *)titleColorActive;
-(UIColor *)titleColorComplete;
-(id)defaultFillColor;
-(id)colorForCurrentState;
-(id)titleForCurrentState;
-(id)titleColorForCurrentState;
-(void)setTitleColorActive:(UIColor *)arg1 ;
-(void)setTitleColorPending:(UIColor *)arg1 ;
-(void)setTitleColorComplete:(UIColor *)arg1 ;
-(void)setArrowColorActive:(UIColor *)arg1 ;
-(void)setArrowColorPending:(UIColor *)arg1 ;
-(void)setArrowColorComplete:(UIColor *)arg1 ;
-(double)widthPending;
-(void)setWidthPending:(double)arg1 ;
-(double)widthComplete;
-(void)setWidthComplete:(double)arg1 ;
-(EBUArrowView *)arrowView;
-(void)setArrowView:(EBUArrowView *)arg1 ;
-(void)setTitlePrefix:(NSString *)arg1 ;
-(void)setTitle:(NSString *)arg1 ;
-(unsigned long long)state;
-(void)setState:(unsigned long long)arg1 ;
-(NSString *)title;
-(id)titleForState:(unsigned long long)arg1 ;
-(id)titleColorForState:(unsigned long long)arg1 ;
-(id)defaultTitleColor;
@end
