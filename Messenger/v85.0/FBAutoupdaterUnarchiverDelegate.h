/*
* This header is generated by classdump-dyld 1.0
* on Friday, August 26, 2016 at 5:18:38 PM British Summer Time
* Operating System: Version 9.3.3 (Build 13G34)
* Image Source: /var/containers/Bundle/Application/6F5201FD-3D2F-4BE1-80E5-E1251C7564E3/Messenger.app/Messenger
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FBAutoupdaterUnarchiverDelegate <NSObject>
@required
-(void)autoupdaterUnarchiver:(id)arg1 didStartUpdate:(id)arg2;
-(void)autoupdaterUnarchiver:(id)arg1 didFinishUpdate:(id)arg2;
-(BOOL)autoupdaterUnarchiver:(id)arg1 update:(id)arg2 shouldUnarchiveFile:(id)arg3 toPath:(id)arg4 crc32:(unsigned long long)arg5;
-(void)autoupdaterUnarchiver:(id)arg1 update:(id)arg2 didMakeProgress:(id)arg3;
-(void)autoupdaterUnarchiver:(id)arg1 update:(id)arg2 didFail:(id)arg3;

@end
