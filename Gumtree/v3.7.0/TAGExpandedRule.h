/*
* This header is generated by classdump-dyld 0.7
* on Friday, August 21, 2015 at 1:27:57 AM British Summer Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /private/var/mobile/Containers/Bundle/Application/21F2B006-1C28-48A8-85CE-538D78391B66/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/Gumtree-Structs.h>
#import <Gumtree/NSCopying.h>

@class NSArray;

@interface TAGExpandedRule : NSObject <NSCopying> {

	NSArray* _positivePredicates;
	NSArray* _negativePredicates;
	NSArray* _addTags;
	NSArray* _removeTags;
	NSArray* _addMacros;
	NSArray* _removeMacros;

}

@property (nonatomic,retain,readonly) NSArray * positivePredicates;              //@synthesize positivePredicates=_positivePredicates - In the implementation block
@property (nonatomic,retain,readonly) NSArray * negativePredicates;              //@synthesize negativePredicates=_negativePredicates - In the implementation block
@property (nonatomic,retain,readonly) NSArray * addTags;                         //@synthesize addTags=_addTags - In the implementation block
@property (nonatomic,retain,readonly) NSArray * removeTags;                      //@synthesize removeTags=_removeTags - In the implementation block
@property (nonatomic,retain,readonly) NSArray * addMacros;                       //@synthesize addMacros=_addMacros - In the implementation block
@property (nonatomic,retain,readonly) NSArray * removeMacros;                    //@synthesize removeMacros=_removeMacros - In the implementation block
+(id)builder;
-(NSArray *)positivePredicates;
-(NSArray *)negativePredicates;
-(NSArray *)addTags;
-(NSArray *)removeTags;
-(NSArray *)addMacros;
-(NSArray *)removeMacros;
-(id)initWithPositivePredicates:(id)arg1 negativePredicates:(id)arg2 addTags:(id)arg3 removeTags:(id)arg4 addMacros:(id)arg5 removeMacros:(id)arg6 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
@end
