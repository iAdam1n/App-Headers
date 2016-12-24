/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:29:28 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/85513C16-EFBE-4673-84DA-B31CD22289F8/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Messenger/Messenger-Structs.h>
#import <Messenger/FBPopoverControllerDelegate.h>
#import <Messenger/FIGDialogProtocol.h>

@class FBModalDialogViewConfigBuilder, FBModalDialogViewController, FIGDialogButtonItem, CKComponent, NSString;

@interface FIGDialogInternal : NSObject <FBPopoverControllerDelegate, FIGDialogProtocol> {

	FBModalDialogViewConfigBuilder* _builder;
	FBModalDialogViewController* _modalDialogViewController;
	double _width;
	FIGDialogButtonItem* _primaryButtonItem;
	FIGDialogButtonItem* _secondaryButtonItem;
	CKComponent* _component;

}

@property (nonatomic,readonly) CKComponent * component;              //@synthesize component=_component - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)componentForModel:(id)arg1 context:(id)arg2 ;
-(void)fb_popoverControllerWillDismissPopover:(id)arg1 withInteraction:(unsigned long long)arg2 ;
-(void)presentInWindow:(id)arg1 ;
-(id)initWithTitle:(id)arg1 primaryButtonItem:(id)arg2 sizeStyle:(unsigned long long)arg3 options:(const SCD_Struct_FI313*)arg4 ;
-(id)_configureModalDialogViewWithTitle:(id)arg1 builder:(id)arg2 defaultTitleFont:(id)arg3 ;
-(CKComponent *)component;
-(void)dismissWithCompletion:(/*^block*/id)arg1 ;
@end
