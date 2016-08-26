/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:20 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol MNThreadMessagesGenerator, MNMessageCellLayoutStrategy;
#import <Messenger/Messenger-Structs.h>
@class MNMessagesUpdateStrategy;

@interface MNMessagesViewUpdateGenerator : NSObject {

	id<MNThreadMessagesGenerator> _messageRowGenerator;
	id<MNMessageCellLayoutStrategy> _messageCellLayoutStrategy;
	MNMessagesUpdateStrategy* _messagesUpdateStrategy;

}
-(id)initWithMessageRowGenerator:(id)arg1 messageCellLayoutStrategy:(id)arg2 ;
-(FBValueObjectPair*)generateUpdateForOldViewModel:(id)arg1 oldThreadContextViewModel:(id)arg2 oldThreadMontageViewModel:(id)arg3 viewModelSource:(id)arg4 ;
-(id)generateUpdateAsyncForOldViewModel:(id)arg1 oldThreadContextViewModel:(id)arg2 oldThreadMontageViewModel:(id)arg3 viewModelSource:(id)arg4 queue:(id)arg5 completion:(/*^block*/id)arg6 ;
@end
