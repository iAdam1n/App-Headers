/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:21:02 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/FE7A361D-639E-4E8F-9E98-6A4739748428/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Facebook/Facebook-Structs.h>
#import <Facebook/CKCompositeComponent.h>

@class FBSearchResultsContext, CKComponent, FBSearchComponentModel;

@interface FBSearchResultsPlayableVideoThumbnailComponent : CKCompositeComponent {

	id _video;
	FBSearchResultsContext* _context;
	CKComponent* _playerComponent;
	FBSearchComponentModel* _videoEdgeModel;

}

@property (nonatomic,readonly) id video;                                             //@synthesize video=_video - In the implementation block
@property (nonatomic,readonly) FBSearchResultsContext * context;                     //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) CKComponent * playerComponent;                        //@synthesize playerComponent=_playerComponent - In the implementation block
@property (nonatomic,readonly) FBSearchComponentModel * videoEdgeModel;              //@synthesize videoEdgeModel=_videoEdgeModel - In the implementation block
+(id)newWithVideoEdgeModel:(id)arg1 style:(const FBSearchResultsPlayableVideoThumbnailComponentStyle*)arg2 size:(const CKComponentSize*)arg3 context:(id)arg4 ;
-(void)_logDidTapVideo;
-(CKComponent *)playerComponent;
-(FBSearchComponentModel *)videoEdgeModel;
-(FBSearchResultsContext *)context;
-(id)video;
@end
