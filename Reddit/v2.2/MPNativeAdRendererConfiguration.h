/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:34:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/3DFA7E95-0979-4D86-B373-C986386EF259/Reddit.app/Reddit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MPNativeAdRendererSettings;
@class NSArray;

@interface MPNativeAdRendererConfiguration : NSObject {

	id<MPNativeAdRendererSettings> _rendererSettings;
	Class _rendererClass;
	NSArray* _supportedCustomEvents;

}

@property (nonatomic,retain) id<MPNativeAdRendererSettings> rendererSettings;              //@synthesize rendererSettings=_rendererSettings - In the implementation block
@property (assign,nonatomic) Class rendererClass;                                          //@synthesize rendererClass=_rendererClass - In the implementation block
@property (nonatomic,retain) NSArray * supportedCustomEvents;                              //@synthesize supportedCustomEvents=_supportedCustomEvents - In the implementation block
-(NSArray *)supportedCustomEvents;
-(Class)rendererClass;
-(id<MPNativeAdRendererSettings>)rendererSettings;
-(void)setRendererClass:(Class)arg1 ;
-(void)setRendererSettings:(id<MPNativeAdRendererSettings>)arg1 ;
-(void)setSupportedCustomEvents:(NSArray *)arg1 ;
@end
