/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:57 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@class NSArray, NSString, NSDictionary;

@interface TAGExpandedResource : NSObject {

	int _resourceFormatVersion;
	NSArray* _rules;
	NSString* _version;
	NSDictionary* _macros;

}

@property (nonatomic,retain,readonly) NSArray * rules;                    //@synthesize rules=_rules - In the implementation block
@property (nonatomic,copy,readonly) NSString * version;                   //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) int resourceFormatVersion;                 //@synthesize resourceFormatVersion=_resourceFormatVersion - In the implementation block
@property (nonatomic,retain,readonly) NSDictionary * macros;              //@synthesize macros=_macros - In the implementation block
+(id)builder;
-(int)resourceFormatVersion;
-(NSDictionary *)macros;
-(id)initWithRules:(id)arg1 macros:(id)arg2 version:(id)arg3 resourceFormatVersion:(int)arg4 ;
-(id)macrosByName:(id)arg1 ;
-(id)allMacros;
-(id)description;
-(NSString *)version;
-(NSArray *)rules;
@end

