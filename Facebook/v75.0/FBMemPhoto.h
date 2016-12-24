/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:21 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/FBWildeMemModelObject.h>
#import <Facebook/FBRichStoryEntityMediaProtocol.h>
#import <Facebook/FBDisplayableMedia.h>
#import <Facebook/FBFeedbackTargetProtocol.h>
#import <Facebook/FBSearchPivotsSource.h>
#import <Facebook/FBShareable.h>
#import <Facebook/FBQueriedEntityFieldsProtocol.h>
#import <Facebook/FBQueriedGoodwillThrowbackAccentImageFieldsProtocol.h>
#import <Facebook/FBQueriedMediaFieldsProtocol.h>
#import <Facebook/FBQueriedNodeFieldsProtocol.h>
#import <Facebook/FBQueriedProfileOverlayableMediaFieldsProtocol.h>
#import <Facebook/FBQueriedSearchCombinedResultFieldsProtocol.h>
#import <Facebook/FBQueriedSearchResultFieldsProtocol.h>

@class NSString;

@interface FBMemPhoto : FBWildeMemModelObject <FBRichStoryEntityMediaProtocol, FBDisplayableMedia, FBFeedbackTargetProtocol, FBSearchPivotsSource, FBShareable, FBQueriedEntityFieldsProtocol, FBQueriedGoodwillThrowbackAccentImageFieldsProtocol, FBQueriedMediaFieldsProtocol, FBQueriedNodeFieldsProtocol, FBQueriedProfileOverlayableMediaFieldsProtocol, FBQueriedSearchCombinedResultFieldsProtocol, FBQueriedSearchResultFieldsProtocol>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(unsigned long long)supportedImageFlags;
-(id)imageClosestToFlag:(unsigned long long)arg1 ;
-(id)imageSourceForFlag:(unsigned long long)arg1 ;
-(id)entityURL;
-(unsigned long long)imageFlagClosestToSize:(double)arg1 ;
-(id)shareableID;
-(id)shareableType;
-(id)defaultAnnotationText;
-(void)taggableSourceAvatarWithSession:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)mediaID;
-(id)mediaID;
-(BOOL)hasCubestripEncodings;
-(id)shareableURL;
-(id)shareableText;
-(id)shareableTitle;
-(id)shareableSubtitle;
-(id)shareableDescription;
-(id)shareableImageURL;
-(id)shareableImage;
-(CGSize)imageSizeForFlag:(unsigned long long)arg1 ;
-(unsigned long long)imageFlagClosestToFlag:(unsigned long long)arg1 ;
-(id)faceBoxesArray;
-(id)cubestripEncodingForSize:(unsigned long long)arg1 ;
-(id)imageForFlag:(unsigned long long)arg1 ;
-(BOOL)isFullInfoLoaded;
-(id)accessibilityLabelString;
-(id)supportedImageURLs;
-(id)defaultPhotoTitle;
-(id)default360PhotoTitle;
-(id)accessibilityLabelStringWithTitle:(id)arg1 includingCaption:(BOOL)arg2 ;
-(CGSize)size;
-(id)place;
-(BOOL)isDisplayable;
-(double)aspectRatio;
-(CGPoint)focusPoint;
@end
