/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/ECAdDetailsCollectionViewCell.h>
#import <Gumtree/ECNativeDFPAdViewDelegate.h>
#import <Gumtree/ECAdDetailsViewCell.h>

@protocol ECAdDetailsViewDelegate;
@class ECNativeDFPAdView, NSString;

@interface ECAdDetailsNativeDFPAdCollectionViewCell : ECAdDetailsCollectionViewCell <ECNativeDFPAdViewDelegate, ECAdDetailsViewCell> {

	BOOL _failedToLoad;
	ECNativeDFPAdView* _nativeAdView;
	id<ECAdDetailsViewDelegate> _delegate;

}

@property (assign,nonatomic) BOOL failedToLoad;                                        //@synthesize failedToLoad=_failedToLoad - In the implementation block
@property (nonatomic,retain) ECNativeDFPAdView * nativeAdView;                         //@synthesize nativeAdView=_nativeAdView - In the implementation block
@property (assign,nonatomic,__weak) id<ECAdDetailsViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setItem:(id)arg1 isSizingCell:(BOOL)arg2 ;
-(ECNativeDFPAdView *)nativeAdView;
-(void)setFailedToLoad:(BOOL)arg1 ;
-(void)nativeDFPAdView:(id)arg1 didFailToReceiveAd:(id)arg2 withError:(id)arg3 ;
-(void)setNativeAdView:(ECNativeDFPAdView *)arg1 ;
-(void)setDelegate:(id<ECAdDetailsViewDelegate>)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id<ECAdDetailsViewDelegate>)delegate;
-(void)awakeFromNib;
-(CGSize)intrinsicContentSize;
-(BOOL)failedToLoad;
@end

