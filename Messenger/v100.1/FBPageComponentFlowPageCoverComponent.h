/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:19 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/CKCompositeComponent.h>

@class FBMemPageCoverScreenElement, FBPageComponentFlowComponentContext;

@interface FBPageComponentFlowPageCoverComponent : CKCompositeComponent {

	FBMemPageCoverScreenElement* _model;
	FBPageComponentFlowComponentContext* _context;

}

@property (nonatomic,readonly) FBMemPageCoverScreenElement * model;                        //@synthesize model=_model - In the implementation block
@property (nonatomic,readonly) FBPageComponentFlowComponentContext * context;              //@synthesize context=_context - In the implementation block
+(id)newWithModel:(id)arg1 context:(id)arg2 ;
+(id)initialState;
-(void)didDownloadCoverPhoto:(id)arg1 ;
-(FBPageComponentFlowComponentContext *)context;
-(FBMemPageCoverScreenElement *)model;
@end
