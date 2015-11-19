/*
* This header is generated by classdump-dyld 0.7
* on Thursday, November 19, 2015 at 5:05:14 PM Greenwich Mean Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/BE5DA1E5-E5C1-4952-A4BE-28BA22319130/Gumtree.app/Gumtree
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2014 by Elias Limneos.
*/


@protocol GPPShareboxService <GPPService>
@required
-(id)stringFromUIEvent:(id)arg1;
-(id)queryForSettings:(/*^block*/id)arg1 enableExtendedFeatures:(BOOL)arg2;
-(void)setAddToCircleTextWarningShown:(/*^block*/id)arg1;
-(void)addDeepLinkItemToAttachment:(id)arg1;
-(void)getPreviewForLinkAttachment:(id)arg1 finished:(/*^block*/id)arg2;
-(void)insertActivity:(id)arg1 eventString:(id)arg2 finished:(/*^block*/id)arg3;
-(void)insertCircle:(id)arg1 eventString:(id)arg2 finished:(/*^block*/id)arg3;
-(void)addPeople:(id)arg1 toCircle:(id)arg2 eventString:(id)arg3 finished:(/*^block*/id)arg4;
-(void)logShareboxEvent:(id)arg1 totalTime:(id)arg2 networkTime:(id)arg3;
-(void)flushEvents;

@end

