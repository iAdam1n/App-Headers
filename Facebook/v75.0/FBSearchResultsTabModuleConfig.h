/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBValueObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSArray;

@interface FBSearchResultsTabModuleConfig : FBValueObject <NSCopying> {

	NSArray* _tabConfigs;
	Class _contentComponentProvider;

}

@property (nonatomic,copy,readonly) NSArray * tabConfigs;                   //@synthesize tabConfigs=_tabConfigs - In the implementation block
@property (nonatomic,readonly) Class contentComponentProvider;              //@synthesize contentComponentProvider=_contentComponentProvider - In the implementation block
-(id)initWithTabConfigs:(id)arg1 contentComponentProvider:(Class)arg2 ;
-(Class)contentComponentProvider;
-(NSArray *)tabConfigs;
@end
