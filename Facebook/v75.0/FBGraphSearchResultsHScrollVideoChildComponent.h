/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBHScrollImpressionLogging.h>
#import <Facebook/FIGCardContentHScrollChildCompliant.h>

@class FBSearchResultsPlayableVideoThumbnailComponent;

@interface FBGraphSearchResultsHScrollVideoChildComponent : CKCompositeComponent <FBHScrollImpressionLogging, FIGCardContentHScrollChildCompliant> {

	FBSearchResultsPlayableVideoThumbnailComponent* _thumbnailComponent;

}
+(id)newWithVideoEdgeModel:(id)arg1 context:(id)arg2 autoplay:(BOOL)arg3 insets:(UIEdgeInsets)arg4 ;
-(void)didTapOnComponent:(id)arg1 ;
@end
