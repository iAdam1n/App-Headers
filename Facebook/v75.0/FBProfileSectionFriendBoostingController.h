/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:01 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBProfileSectionController.h>

@protocol FBSectionedDataSourceWriting;
@class NSString;

@interface FBProfileSectionFriendBoostingController : NSObject <FBProfileSectionController> {

	id<FBSectionedDataSourceWriting> _writeInterface;
	BOOL _hasBeenInserted;
	unsigned long long _presentationStyle;
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
-(unsigned long long)sectionStartIndex;
-(void)setSectionStartIndex:(unsigned long long)arg1 ;
-(id)initWithUniqueIdentifier:(id)arg1 writeInterface:(id)arg2 presentationStyle:(unsigned long long)arg3 ;
-(void)_showContentWithPerson:(id)arg1 ;
-(void)hideContent;
-(void)configureWithPerson:(id)arg1 ;
-(unsigned long long)numberOfSections;
-(NSString *)uniqueIdentifier;
@end
