/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:16 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/

#import <Gumtree/ECSectionMapGenerator.h>
#import <Gumtree/ECSectionMapTransformer.h>

@protocol ECSectionMapTransformer <ECSectionMapReceiver,ECSectionMapGenerator>
@end


@class ECSectionMap, NSString;

@interface ECSectionMapTransformer : ECSectionMapGenerator <ECSectionMapTransformer> {

	ECSectionMap* _originalSectionMap;

}

@property (nonatomic,retain) ECSectionMap * originalSectionMap;              //@synthesize originalSectionMap=_originalSectionMap - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) id<ECSectionMapReceiver> receiver; 
@property (nonatomic,readonly) ECSectionMap * sectionMap; 
-(void)setSectionMap:(ECSectionMap *)arg1 ;
-(ECSectionMap *)sectionMap;
-(ECSectionMap *)originalSectionMap;
-(void)setOriginalSectionMap:(ECSectionMap *)arg1 ;
-(void)transform;
@end

