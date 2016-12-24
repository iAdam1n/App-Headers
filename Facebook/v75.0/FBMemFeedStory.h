/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/FBWildeMemModelObject.h>
#import <Facebook/FBAppFeedAdvertisable.h>
#import <Facebook/FBSponsorable.h>
#import <Facebook/FBQueriedFeedUnitFieldsProtocolHuman.h>
#import <Facebook/FBSearchPivotsSource.h>
#import <Facebook/FBFeedbackTargetProtocol.h>
#import <Facebook/FBHideable.h>
#import <Facebook/FBQueriedEntityFieldsProtocol.h>
#import <Facebook/FBQueriedFeedUnitFieldsProtocol.h>
#import <Facebook/FBQueriedGoodwillThrowbackFeedUnitFieldsProtocol.h>
#import <Facebook/FBQueriedNodeFieldsProtocol.h>
#import <Facebook/FBQueriedSearchCombinedResultFieldsProtocol.h>
#import <Facebook/FBQueriedSearchResultFieldsProtocol.h>

@class FBMemStoryAttachment, FBMemImage, NSString, FBMemRating, NSArray;

@interface FBMemFeedStory : FBWildeMemModelObject <FBAppFeedAdvertisable, FBSponsorable, FBQueriedFeedUnitFieldsProtocolHuman, FBSearchPivotsSource, FBFeedbackTargetProtocol, FBHideable, FBQueriedEntityFieldsProtocol, FBQueriedFeedUnitFieldsProtocol, FBQueriedGoodwillThrowbackFeedUnitFieldsProtocol, FBQueriedNodeFieldsProtocol, FBQueriedSearchCombinedResultFieldsProtocol, FBQueriedSearchResultFieldsProtocol>

@property (nonatomic,readonly) FBMemStoryAttachment * firstAttachment; 
@property (nonatomic,readonly) FBMemModelObject*<FBQueriedActorFieldsProtocol> firstActor; 
@property (nonatomic,readonly) FBMemImage * headerImage; 
@property (nonatomic,readonly) FBMemImage * icon; 
@property (nonatomic,copy,readonly) NSString * appName; 
@property (nonatomic,copy,readonly) NSString * contextSentence; 
@property (nonatomic,readonly) FBMemRating * appRating; 
@property (nonatomic,copy,readonly) NSString * bodyText; 
@property (nonatomic,copy,readonly) NSString * primaryActionText; 
@property (nonatomic,copy,readonly) NSString * nativeActionURLString; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy,readonly) NSArray * taggedPersons; 
@property (nonatomic,copy,readonly) NSString * tracking; 
+(id)graphQLTypeName;
-(id)entityURL;
-(id)fbShareableCorrespondingToShareable;
-(BOOL)sponsoredValue;
-(void)taggableSourceAvatarWithSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)sponsoredImpressionURLs;
-(id)sponsorableID;
-(FBMemStoryAttachment *)firstAttachment;
-(NSString *)primaryActionText;
-(NSString *)contextSentence;
-(NSString *)nativeActionURLString;
-(id)logicalUniqueID;
-(FBMemRating *)appRating;
-(FBMemModelObject*<FBQueriedActorFieldsProtocol>)firstActor;
-(id)f_describeLevel:(unsigned long long)arg1 ;
-(void)addRecursiveDescriptionToString:(id)arg1 indentLevel:(long long)arg2 ;
-(NSArray *)taggedPersons;
-(NSString *)bodyText;
-(FBMemImage *)icon;
-(NSString *)appName;
-(FBMemImage *)headerImage;
@end
