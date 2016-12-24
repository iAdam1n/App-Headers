/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:06 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>
#import <Facebook/FBAlbumAttachmentContentComponentImplementation.h>

@class FBFeedHScrollComponent, NSArray, NSString;

@interface FBHScrollAlbumAttachmentComponent : CKCompositeComponent <FBAlbumAttachmentContentComponentImplementation> {

	FBHScrollAlbumAttachmentComponentMap* _photoMap;
	FBFeedHScrollComponent* _hScrollComponent;
	NSArray* _trackingCodes;
	NSString* _analyticsModule;

}

@property (nonatomic,retain) FBFeedHScrollComponent * hScrollComponent;              //@synthesize hScrollComponent=_hScrollComponent - In the implementation block
@property (nonatomic,copy) NSArray * trackingCodes;                                  //@synthesize trackingCodes=_trackingCodes - In the implementation block
@property (nonatomic,copy) NSString * analyticsModule;                               //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)newWithMedia:(const FragmentVector<FBFM::FBHScrollAlbumAttachmentComponentMediaGraphQL, true>*)arg1 toolbox:(id)arg2 photoTapAction:(CKTypedComponentAction<>)arg3 tagTapAction:(CKTypedComponentAction<>)arg4 aggregationKey:(id)arg5 ;
-(NSString *)analyticsModule;
-(NSArray *)trackingCodes;
-(void)setAnalyticsModule:(NSString *)arg1 ;
-(FBFeedHScrollComponent *)hScrollComponent;
-(void)setTrackingCodes:(NSArray *)arg1 ;
-(void)setHScrollComponent:(FBFeedHScrollComponent *)arg1 ;
-(id)photoComponentForPhoto:(id)arg1 ;
-(id)tagOverlayComponentForPhoto:(id)arg1 ;
@end
