/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/FIGDialogProtocol.h>

@class FIGDialogInternal, NSString;

@interface FIGProfilePhotoDialog : NSObject <FIGDialogProtocol> {

	FIGDialogInternal* _internalDialog;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)presentInWindow:(id)arg1 ;
-(id)initWithTitle:(id)arg1 subtitle:(id)arg2 image:(id)arg3 facepileComponent:(id)arg4 primaryButtonItem:(id)arg5 secondaryButtonItem:(id)arg6 sizeStyle:(unsigned long long)arg7 ;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
@end
