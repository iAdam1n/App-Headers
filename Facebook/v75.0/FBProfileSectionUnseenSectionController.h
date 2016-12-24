/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBProfileSectionController.h>

@protocol FBSectionedDataSourceWriting;
@class NSString;

@interface FBProfileSectionUnseenSectionController : NSObject <FBProfileSectionController> {

	id<FBSectionedDataSourceWriting> _writeInterface;
	BOOL _hasInsertedTitleLabel;
	unsigned long long _numberOfUnseenStories;
	BOOL _hasInsertedLoadingState;
	NSString* _uniqueIdentifier;
	unsigned long long _sectionStartIndex;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic) unsigned long long sectionStartIndex;               //@synthesize sectionStartIndex=_sectionStartIndex - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfSections; 
@property (nonatomic,copy,readonly) NSString * uniqueIdentifier;                 //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
-(id)initWithUniqueIdentifier:(id)arg1 writeInterface:(id)arg2 ;
-(unsigned long long)sectionStartIndex;
-(void)setSectionStartIndex:(unsigned long long)arg1 ;
-(void)showLoadingState;
-(void)showUnseenSectionWithEdges:(id)arg1 ;
-(void)clearLoadingState;
-(void)clearUnseenSection;
-(unsigned long long)_numberOfTitleItems;
-(BOOL)isUnseenSectionShown;
-(unsigned long long)numberOfSections;
-(NSString *)uniqueIdentifier;
@end
