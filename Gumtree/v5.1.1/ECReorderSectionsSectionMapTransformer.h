/*
* This header is generated by classdump-dyld 1.0
* on Thursday, August 25, 2016 at 11:49:36 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/A861CD42-DC74-45D3-9030-D3B6F185E279/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Gumtree/ECSectionMapTransformer.h>

@class NSArray;

@interface ECReorderSectionsSectionMapTransformer : ECSectionMapTransformer {

	BOOL _removeUnorderedSections;
	NSArray* _ordering;

}

@property (nonatomic,copy) NSArray * ordering;                          //@synthesize ordering=_ordering - In the implementation block
@property (assign,nonatomic) BOOL removeUnorderedSections;              //@synthesize removeUnorderedSections=_removeUnorderedSections - In the implementation block
-(void)setRemoveUnorderedSections:(BOOL)arg1 ;
-(BOOL)removeUnorderedSections;
-(id)sectionMap;
-(NSArray *)ordering;
-(void)setOrdering:(NSArray *)arg1 ;
@end

