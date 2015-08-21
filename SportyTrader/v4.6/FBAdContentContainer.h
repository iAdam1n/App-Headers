/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:49:24 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/FACE73A7-54D9-4209-946C-91D556037309/SportyTrader.app/SportyTrader
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <SportyTrader/SportyTrader-Structs.h>
#import <SportyTrader/FBAdContentContainer.h>
@class FBAdView, FBAdDataModel;


@protocol FBAdContentContainer <NSObject>
@property (assign,nonatomic,__weak) NSObject*<FBAdContentContainerDelegate> delegate; 
@property (assign,nonatomic,__weak) FBAdView * parent; 
@property (assign,nonatomic) CGSize actualAdSize; 
@property (assign,nonatomic) FBAdSize adSizeType; 
@property (nonatomic,retain) FBAdDataModel * offsiteAd; 
@property (assign,nonatomic) CGSize minimumSize; 
@property (assign,nonatomic) CGSize maximumSize; 
@optional
-(BOOL)loadAdMarkup:(id)arg1 activationCommand:(id)arg2;

@required
-(id)initWithAdView:(id)arg1 actualAdSize:(CGSize)arg2 adSizeType:(FBAdSize)arg3;
-(void)setActualAdSize:(CGSize)arg1;
-(void)setAdSizeType:(FBAdSize)arg1;
-(id)getView;
-(BOOL)loadAdResponse:(id)arg1;
-(BOOL)logImpression;
-(BOOL)logClick;
-(CGSize)actualAdSize;
-(FBAdSize)adSizeType;
-(FBAdDataModel *)offsiteAd;
-(void)setOffsiteAd:(id)arg1;
-(CGSize)maximumSize;
-(void)setDelegate:(id)arg1;
-(void)setFrame:(CGRect)arg1;
-(NSObject*<FBAdContentContainerDelegate>)delegate;
-(void)setMinimumSize:(CGSize)arg1;
-(CGSize)minimumSize;
-(void)setMaximumSize:(CGSize)arg1;
-(FBAdView *)parent;
-(void)setParent:(id)arg1;

@end


@protocol FBAdContentContainerDelegate;
@class FBAdView, FBAdDataModel, NSObject, NSString;

@interface FBAdContentContainer : NSObject <FBAdContentContainer> {

	FBAdView* _parent;
	NSObject*<FBAdContentContainerDelegate> _delegate;
	FBAdDataModel* _offsiteAd;
	CGSize _actualAdSize;
	FBAdSize _adSizeType;
	CGSize _minimumSize;
	CGSize _maximumSize;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) NSObject*<FBAdContentContainerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) FBAdView * parent;                                             //@synthesize parent=_parent - In the implementation block
@property (assign,nonatomic) CGSize actualAdSize;                                                  //@synthesize actualAdSize=_actualAdSize - In the implementation block
@property (assign,nonatomic) FBAdSize adSizeType;                                                  //@synthesize adSizeType=_adSizeType - In the implementation block
@property (nonatomic,retain) FBAdDataModel * offsiteAd;                                            //@synthesize offsiteAd=_offsiteAd - In the implementation block
@property (assign,nonatomic) CGSize minimumSize;                                                   //@synthesize minimumSize=_minimumSize - In the implementation block
@property (assign,nonatomic) CGSize maximumSize;                                                   //@synthesize maximumSize=_maximumSize - In the implementation block
-(id)initWithAdView:(id)arg1 actualAdSize:(CGSize)arg2 adSizeType:(FBAdSize)arg3 ;
-(void)setActualAdSize:(CGSize)arg1 ;
-(void)setAdSizeType:(FBAdSize)arg1 ;
-(id)getView;
-(BOOL)loadAdResponse:(id)arg1 ;
-(BOOL)logImpression;
-(BOOL)logClick;
-(CGSize)actualAdSize;
-(FBAdSize)adSizeType;
-(FBAdDataModel *)offsiteAd;
-(void)setOffsiteAd:(FBAdDataModel *)arg1 ;
-(id)createAdRequest:(id)arg1 screenSize:(CGSize)arg2 ;
-(CGSize)maximumSize;
-(void)dealloc;
-(void)setDelegate:(NSObject*<FBAdContentContainerDelegate>)arg1 ;
-(void)setFrame:(CGRect)arg1 ;
-(NSObject*<FBAdContentContainerDelegate>)delegate;
-(void)setMinimumSize:(CGSize)arg1 ;
-(CGSize)minimumSize;
-(void)setMaximumSize:(CGSize)arg1 ;
-(FBAdView *)parent;
-(void)setParent:(FBAdView *)arg1 ;
@end

