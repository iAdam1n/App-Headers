/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <UIKit/UIView.h>

@class FBNativeAd, NSArray;

@interface FBNativeAdView : UIView {

	BOOL _loaded;
	FBNativeAd* _nativeAd;
	NSArray* _clickableViews;
	NSArray* _excludedClickableViews;
	CGSize _adSize;

}

@property (assign,getter=isLoaded,nonatomic) BOOL loaded;                   //@synthesize loaded=_loaded - In the implementation block
@property (assign,nonatomic,__weak) FBNativeAd * nativeAd;                  //@synthesize nativeAd=_nativeAd - In the implementation block
@property (assign,nonatomic) CGSize adSize;                                 //@synthesize adSize=_adSize - In the implementation block
@property (nonatomic,retain) NSArray * clickableViews;                      //@synthesize clickableViews=_clickableViews - In the implementation block
@property (nonatomic,retain) NSArray * excludedClickableViews;              //@synthesize excludedClickableViews=_excludedClickableViews - In the implementation block
-(void)setNativeAd:(FBNativeAd *)arg1 ;
-(NSArray *)clickableViews;
-(NSArray *)excludedClickableViews;
-(id)initWithAdSize:(CGSize)arg1 ;
-(void)updateWithNativeAd:(id)arg1 ;
-(void)resetViews;
-(id)allInteractableTargets;
-(FBNativeAd *)nativeAd;
-(CGSize)adSize;
-(void)setAdSize:(CGSize)arg1 ;
-(void)setClickableViews:(NSArray *)arg1 ;
-(void)setExcludedClickableViews:(NSArray *)arg1 ;
-(void)setLoaded:(BOOL)arg1 ;
-(void)reset;
-(BOOL)isLoaded;
@end

