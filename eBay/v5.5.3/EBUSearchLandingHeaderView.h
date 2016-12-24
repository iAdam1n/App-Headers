/*
* This header is generated by classdump-dyld 1.0
* on Friday, December 23, 2016 at 8:53:13 PM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/B79A6C91-6A31-4B98-98DF-DAB1E6185487/eBay.app/eBay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <eBay/eBay-Structs.h>
#import <ComponentUI/EUIView.h>

@class EUILineSeparatorView;

@interface EBUSearchLandingHeaderView : EUIView {

	BOOL _showBrandingStrip;
	EUILineSeparatorView* _brandingStrip;
	EUILineSeparatorView* _lineSeparator;

}

@property (assign,nonatomic) BOOL showBrandingStrip;                            //@synthesize showBrandingStrip=_showBrandingStrip - In the implementation block
@property (nonatomic,retain) EUILineSeparatorView * brandingStrip;              //@synthesize brandingStrip=_brandingStrip - In the implementation block
@property (nonatomic,retain) EUILineSeparatorView * lineSeparator;              //@synthesize lineSeparator=_lineSeparator - In the implementation block
@property (nonatomic,readonly) double headerHeight; 
+(id)headerViewWithBrandingStrip:(BOOL)arg1 ;
-(void)setShowBrandingStrip:(BOOL)arg1 ;
-(EUILineSeparatorView *)brandingStrip;
-(void)setBrandingStrip:(EUILineSeparatorView *)arg1 ;
-(EUILineSeparatorView *)lineSeparator;
-(void)setLineSeparator:(EUILineSeparatorView *)arg1 ;
-(BOOL)showBrandingStrip;
-(id)initWithFrame:(CGRect)arg1 ;
-(double)headerHeight;
@end
