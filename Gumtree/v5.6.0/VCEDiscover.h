/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:25:23 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FB69C75F-331C-4C56-9EB7-0BF6B9A7830F/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSArray;

@interface VCEDiscover : NSObject {

	Class _uiViewClass;
	BOOL _useNamesArray;
	NSArray* _adViewNamesArrayFromGG;
	NSArray* _adViewNamesArrayFromSDK;

}

@property (assign,nonatomic) BOOL useNamesArray;                             //@synthesize useNamesArray=_useNamesArray - In the implementation block
@property (nonatomic,retain) NSArray * adViewNamesArrayFromGG;               //@synthesize adViewNamesArrayFromGG=_adViewNamesArrayFromGG - In the implementation block
@property (nonatomic,retain) NSArray * adViewNamesArrayFromSDK;              //@synthesize adViewNamesArrayFromSDK=_adViewNamesArrayFromSDK - In the implementation block
+(id)sharedInstance;
-(id)viewControllerForViewFromMainQueue:(id)arg1 ;
-(void)setAdViewNamesArrayFromSDK:(NSArray *)arg1 ;
-(NSArray *)adViewNamesArrayFromGG;
-(void)setAdViewNamesArrayFromGG:(NSArray *)arg1 ;
-(NSArray *)adViewNamesArrayFromSDK;
-(BOOL)useNamesArray;
-(void)setUseNamesArray:(BOOL)arg1 ;
-(id)init;
-(id)viewControllerForView:(id)arg1 ;
@end
