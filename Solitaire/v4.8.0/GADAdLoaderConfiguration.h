/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 12:03:42 AM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/FE008365-307B-4CDF-8948-1B974F28A799/SolitaireFree.app/SolitaireFree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSSet, NSDictionary;

@interface GADAdLoaderConfiguration : NSObject {

	NSSet* _adTypeClasses;
	NSSet* _adTypes;
	NSDictionary* _options;

}

@property (nonatomic,copy,readonly) NSSet * adTypeClasses;               //@synthesize adTypeClasses=_adTypeClasses - In the implementation block
@property (nonatomic,copy,readonly) NSSet * adTypes;                     //@synthesize adTypes=_adTypes - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * options;              //@synthesize options=_options - In the implementation block
-(NSSet *)adTypes;
-(NSSet *)adTypeClasses;
-(id)initWithAdTypes:(id)arg1 options:(id)arg2 ;
-(NSDictionary *)options;
@end

