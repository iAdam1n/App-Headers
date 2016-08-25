/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:43 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SolitaireFree/MPNativeAdRendererSettings.h>

@class NSString;

@interface MPStaticNativeAdRendererSettings : NSObject <MPNativeAdRendererSettings> {

	Class _renderingViewClass;
	/*^block*/id _viewSizeHandler;

}

@property (assign,nonatomic) Class renderingViewClass;              //@synthesize renderingViewClass=_renderingViewClass - In the implementation block
@property (nonatomic,copy) id viewSizeHandler;                      //@synthesize viewSizeHandler=_viewSizeHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)renderingViewClass;
-(id)viewSizeHandler;
-(void)setRenderingViewClass:(Class)arg1 ;
-(void)setViewSizeHandler:(id)arg1 ;
@end

