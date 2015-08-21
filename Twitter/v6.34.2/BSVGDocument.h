/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 11:30:48 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/16C752D5-8F70-4E83-B0AB-94FF56CA8C26/Twitter.app/Twitter
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


#import <Twitter/Twitter-Structs.h>
@class NSString, NSArray, BSVGContainer;

@interface BSVGDocument : NSObject {

	void* _documentReader;
	NSString* _name;
	NSArray* _styles;
	BSVGContainer* _container;
	long long _index;
	CGColorSpaceRef _colorSpace;

}

@property (nonatomic,__weak,readonly) BSVGContainer * container;              //@synthesize container=_container - In the implementation block
@property (nonatomic,readonly) long long index;                               //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) CGRect viewBox; 
@property (nonatomic,readonly) CGSize viewPortSize; 
@property (nonatomic,readonly) void* documentReader;                          //@synthesize documentReader=_documentReader - In the implementation block
@property (nonatomic,copy,readonly) NSArray * styles;                         //@synthesize styles=_styles - In the implementation block
@property (nonatomic,readonly) CGColorSpaceRef colorSpace;                    //@synthesize colorSpace=_colorSpace - In the implementation block
-(id)imageAtSize:(CGSize)arg1 replacementStyles:(id)arg2 cacheKey:(id)arg3 ;
-(id)image;
-(CGSize)viewPortSize;
-(CGRect)viewBox;
-(void*)documentReader;
-(id)makeStyleDictionary:(const Reader*)arg1 ;
-(id)initWithContainer:(id)arg1 index:(long long)arg2 ;
-(CGColorSpaceRef)colorSpace;
-(void)dealloc;
-(NSString *)name;
-(BSVGContainer *)container;
-(long long)index;
-(NSArray *)styles;
@end

