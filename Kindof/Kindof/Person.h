//
//  Person.h
//  Kindof
//
//  Created by Zhuge_Mac on 16/12/6.
//  Copyright © 2016年 Magic. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Person : NSObject
// id 任何对象
// instancetype 当前类
// Person * 只能是Person
// __kindof 子类也可以
+(__kindof Person *)person;
@end
