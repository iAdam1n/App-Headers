/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/MNAttachmentStyleViewFactory.h>
#import <Messenger/FBViewerContextClassProvidable.h>

@protocol FBProvider;
@class NSString;

@interface MNVideoShareAttachmentViewFactory : NSObject <MNAttachmentStyleViewFactory, FBViewerContextClassProvidable> {

	id<FBProvider> _intentHandlerProvider;
	id<FBProvider> _sessionProvider;
	id<FBProvider> _urlResolverProvider;
	id<FBProvider> _videoControllerMapProvider;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id)newAttachmentView;
-(id)newAttachmentViewController;
-(Class)attachmentViewClass;
@end
