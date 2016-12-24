/*
* This header is generated by classdump-dyld 1.0
* on Saturday, December 24, 2016 at 12:36:38 AM Greenwich Mean Time
* Operating System: Version 10.1.1 (Build 14B150)
* Image Source: /var/containers/Bundle/Application/91AA76A0-F2FF-4AAA-BCD2-7E5978B32B63/Skype.app/Skype
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Skype/SKPMessagePresentationDelegate.h>

@class NSArray, NSMapTable, NSString;

@interface SKPChatPluginManager : NSObject <SKPMessagePresentationDelegate> {

	NSArray* _plugins;
	NSMapTable* _cellClassToPluginMapping;

}

@property (nonatomic,readonly) NSArray * plugins;                                  //@synthesize plugins=_plugins - In the implementation block
@property (nonatomic,readonly) NSMapTable * cellClassToPluginMapping;              //@synthesize cellClassToPluginMapping=_cellClassToPluginMapping - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(Class)modelClassForMessageType:(int)arg1 ;
-(Class)viewModelClassForMessageItem:(id)arg1 ;
-(id)toastContentViewControllerForMessageItem:(id)arg1 andConversation:(id)arg2 ;
-(void)chatViewController:(id)arg1 willDisplayCell:(id)arg2 ;
-(void)chatViewController:(id)arg1 didEndDisplayingCell:(id)arg2 ;
-(void)chatViewController:(id)arg1 didSelectItemWithViewModel:(id)arg2 chatCell:(id)arg3 ;
-(void)forwardMessage:(id)arg1 toConversation:(id)arg2 ;
-(unsigned long long)capabilitiesRequiredToForwardMessage:(id)arg1 ;
-(void)onNewMessage:(id)arg1 inConversation:(id)arg2 ;
-(void)chatViewWillDisappearWithConversation:(id)arg1 ;
-(BOOL)typeOverrideForALEMessage:(id)arg1 type:(int*)arg2 ;
-(void)enumeratePluginsUsingBlock:(/*^block*/id)arg1 ;
-(NSMapTable *)cellClassToPluginMapping;
-(id)pluginThatIsKindOfClass:(Class)arg1 ;
-(void)enumeratePluginsConformingToProtocol:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)enumeratePluginCellClassesUsingBlock:(/*^block*/id)arg1 ;
-(long long)layoutItemTypeForViewModel:(id)arg1 ;
-(id)pluginActivities:(id)arg1 userInfo:(id)arg2 ;
-(NSArray *)plugins;
@end
