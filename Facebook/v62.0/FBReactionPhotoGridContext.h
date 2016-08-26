/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:39:31 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/C3C2BD9F-C9D4-4E48-9EC0-40E7F1350599/Facebook.app/Facebook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBReactionPhotoGridComponentDelegate;
#import <Facebook/Facebook-Structs.h>
@class NSArray, FBFeedToolbox;

@interface FBReactionPhotoGridContext : NSObject {

	NSArray* _photoAttachments;
	FBFeedToolbox* _toolbox;
	id<FBReactionPhotoGridComponentDelegate> _delegate;
	UIEdgeInsets _insets;

}

@property (nonatomic,readonly) UIEdgeInsets insets;                                                 //@synthesize insets=_insets - In the implementation block
@property (nonatomic,copy,readonly) NSArray * photoAttachments;                                     //@synthesize photoAttachments=_photoAttachments - In the implementation block
@property (nonatomic,readonly) FBFeedToolbox * toolbox;                                             //@synthesize toolbox=_toolbox - In the implementation block
@property (assign,nonatomic,__weak) id<FBReactionPhotoGridComponentDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(FBFeedToolbox *)toolbox;
-(NSArray *)photoAttachments;
-(id)initWithPhotos:(id)arg1 toolbox:(id)arg2 insets:(UIEdgeInsets)arg3 ;
-(void)setDelegate:(id<FBReactionPhotoGridComponentDelegate>)arg1 ;
-(id<FBReactionPhotoGridComponentDelegate>)delegate;
-(UIEdgeInsets)insets;
@end
