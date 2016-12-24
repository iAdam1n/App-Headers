/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:15 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FBViewerContextClassProvidable.h>

@protocol MNThreadRowCTAViewModelGenerating, MNThreadRowCTAHandling;
@class NSString;

@interface MNThreadListCTAProvider : NSObject <FBViewerContextClassProvidable> {

	id<MNThreadRowCTAViewModelGenerating> _threadRowCTAViewModelGenerator;
	id<MNThreadRowCTAHandling> _threadRowCTAHandler;

}

@property (nonatomic,readonly) id<MNThreadRowCTAViewModelGenerating> threadRowCTAViewModelGenerator;              //@synthesize threadRowCTAViewModelGenerator=_threadRowCTAViewModelGenerator - In the implementation block
@property (nonatomic,readonly) id<MNThreadRowCTAHandling> threadRowCTAHandler;                                    //@synthesize threadRowCTAHandler=_threadRowCTAHandler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithProviderMapData:(id)arg1 ;
-(id<MNThreadRowCTAHandling>)threadRowCTAHandler;
-(id)_generators:(id)arg1 ;
-(id)_identifierToHandlerMap:(id)arg1 ;
-(id<MNThreadRowCTAViewModelGenerating>)threadRowCTAViewModelGenerator;
@end
